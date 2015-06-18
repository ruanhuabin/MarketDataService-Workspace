package cn.edu.tsinghua.format;

import com.maxeler.maxcompiler.v2.kernelcompiler.types.base.DFETypeFactory;
import com.maxeler.networking.v1.framed_kernels.ByteOrder;
import com.maxeler.networking.v1.framed_kernels.FrameFormat;

public class OutputFrameFormat extends FrameFormat {
		public OutputFrameFormat() {
			super(ByteOrder.LITTLE_ENDIAN);

			addField("type", DFETypeFactory.dfeUInt(8));
			addField("chain", DFETypeFactory.dfeUInt(8));
			addField("fttype", DFETypeFactory.dfeUInt(8));
			addField("padding1", DFETypeFactory.dfeUInt(8));
			addField("contentLength", DFETypeFactory.dfeUInt(16));

			addField("padding2", DFETypeFactory.dfeUInt(16));

			addField("subjectID", DFETypeFactory.dfeUInt(32));
			addField("tid", DFETypeFactory.dfeUInt(32));
			addField("commPhaseNo", DFETypeFactory.dfeUInt(32));
			addField("sequenceNo", DFETypeFactory.dfeUInt(32));
			addField("frontSeqNo", DFETypeFactory.dfeUInt(32));
			addField("requestID", DFETypeFactory.dfeUInt(32));
			addField("sessionID", DFETypeFactory.dfeUInt(32));

			addField("frontID", DFETypeFactory.dfeUInt(16));

			addField("padding3", DFETypeFactory.dfeUInt(16));

			addField("groupID", DFETypeFactory.dfeUInt(32));
			addField("oldSubjectID", DFETypeFactory.dfeUInt(32));
			addField("convergenceID", DFETypeFactory.dfeUInt(32));
			addField("oldSequenceNo", DFETypeFactory.dfeUInt(32));

			addField("pubNodeID", DFETypeFactory.dfeUInt(16));
			addField("riskID", DFETypeFactory.dfeUInt(16));
			addField("matchID", DFETypeFactory.dfeUInt(16));

			addField("padding4", DFETypeFactory.dfeUInt(16));

			addField("errorID", DFETypeFactory.dfeUInt(32));

			addField("content", DFETypeFactory.dfeRawBits(32*8));

		}
	}