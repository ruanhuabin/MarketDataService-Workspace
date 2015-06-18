#ifndef XTPHEADER_H_C2MYQIFN
#define XTPHEADER_H_C2MYQIFN

#include <boost/integer.hpp>
#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/include/adapt_struct.hpp>

using boost::uint8_t;
using boost::uint16_t;
using boost::uint32_t;

struct FidHeader
{
  uint16_t Fid;
  uint16_t FieldLen;
};

BOOST_FUSION_ADAPT_STRUCT(
  FidHeader,
  (uint16_t,  Fid)
  (uint16_t,  FieldLen)
);

struct  XTPHeader
{
  uint8_t  Type;             /**< 包类型（'P'发布，'R'请求，'O'应答） */
  uint8_t  Chain;            /**< XTP报文的连续标志 */
  uint8_t  FTType;           /**< 容错接口中的类型 */
  uint16_t ContentLength;    /**< 除报头之外，各field长度和 */
  uint32_t SubjectID;        /**< 主题 */
  uint32_t Tid;              /**< XTP报文的id  */
  uint32_t CommPhaseNo;      /**< 通讯阶段序号,每次更换序号，SequenceNo都从1重新开始 */
  uint32_t SequenceNo;       /**< XTP报文的序号 */
  uint32_t FrontSeqNo;       /**< 前置报文序号 */
  uint32_t RequestID;        /**< 请求ID*/
  uint32_t SessionID;        /**< 请求发起者在前置的会话ID */
  uint16_t FrontID;          /**< 交易前置的标识 */
  uint32_t GroupID;          /**< 订阅组标识*/
  uint32_t OldSubjectID;     /**< 源订阅主题号*/
  uint32_t ConvergenceID;    /**< 收敛编号*/
  uint32_t OldSequenceNo;
  uint16_t PubNodeID;        /**< 发送端节点编号*/
  uint16_t RiskID;           /**< 风控分区的标识 */
  uint16_t MatchID;          /**< 撮合分区的标识 */
  uint32_t ErrorID;          /**< 错误代码 */

  /// functions
  void print() const;
	void set_all(uint16_t content_length);
};

BOOST_FUSION_ADAPT_STRUCT(
  XTPHeader,
  (uint8_t,  Type)
  (uint8_t,  Chain)
  (uint8_t,  FTType)
  (uint16_t, ContentLength)
  (uint32_t, SubjectID)
  (uint32_t, Tid)
  (uint32_t, CommPhaseNo)
  (uint32_t, SequenceNo)
  (uint32_t, FrontSeqNo)
  (uint32_t, RequestID)
  (uint32_t, SessionID)
  (uint16_t, FrontID)
  (uint32_t, GroupID)
  (uint32_t, OldSubjectID)
  (uint32_t, ConvergenceID)
  (uint32_t, OldSequenceNo)
  (uint16_t, PubNodeID)
  (uint16_t, RiskID)
  (uint16_t, MatchID)
  (uint32_t, ErrorID)
);

#endif /* end of include guard: XTPHEADER_H_C2MYQIFN */
