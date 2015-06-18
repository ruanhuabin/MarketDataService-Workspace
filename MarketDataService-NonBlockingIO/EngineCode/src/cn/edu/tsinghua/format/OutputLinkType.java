package cn.edu.tsinghua.format;

import com.maxeler.maxcompiler.v2.kernelcompiler.types.base.DFETypeFactory;
import com.maxeler.maxcompiler.v2.kernelcompiler.types.composite.DFEStructType;
import com.maxeler.networking.v1.framed_kernels.FramedLinkType;

public class OutputLinkType extends DFEStructType implements FramedLinkType {
	public OutputLinkType()
	{
		super(sft("data", DFETypeFactory.dfeRawBits(64)),
				sft("sof",	DFETypeFactory.dfeBool()),
				sft("eof",  DFETypeFactory.dfeBool()),
				sft("mod",	DFETypeFactory.dfeUInt(3)));
	}

	@Override
	public String getEOF()
	{
		return "eof";
	}

	@Override
	public String getSOF()
	{
		return "sof";
	}

	@Override
	public String getData()
	{
		return "data";
	}

	@Override
	public String getMod()
	{
		return "mod";
	}

	@Override
	public DFEStructType getDFEStructType()
	{
		return this;
	}
}