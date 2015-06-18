// XTPPackage.h: interface for the CXTPPackage class .
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_XTPPACKAGE_H__266F38F0_E245_4E93_89AB_65BC7D438E18__INCLUDED_)
#define AFX_XTPPACKAGE_H__266F38F0_E245_4E93_89AB_65BC7D438E18__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "FieldSet.h"
#include "Package.h"

#define XTP_PACKAGE_MAX_SIZE	1280
#define XTP_FIELDTYPE_SIZE		10

const BYTE CHAIN_CONTINUE	= 'C';		//���к�����XTP����
const BYTE CHAIN_LAST		= 'L';		//���һ��XTP����

const BYTE XTP_REQUEST		= 'R';		//����
const BYTE XTP_RESPONSE		= 'O';		//Ӧ��
const BYTE XTP_PUBLISH		= 'P';		//����

/**XTP����ͷ�ṹ
*/
struct	TXTPHeader
{
	BYTE	Type;				/**< �����ͣ�'P'������'R'����'O'Ӧ�� */
	BYTE	Chain;				/**< XTP���ĵ�������־ */
	WORD	ContentLength;		/**< ����ͷ֮�⣬��field���Ⱥ� */
	DWORD	SubjectID;			/**< ���� */
	DWORD	Tid;				/**< XTP���ĵ�id	*/
	DWORD	CommPhaseNo;		/**< ͨѶ�׶����,ÿ�θ�����ţ�SequenceNo����1���¿�ʼ */
	DWORD	SequenceNo;			/**< XTP���ĵ���� */
	DWORD	RequestID;			/**< ����ID*/
	DWORD	SessionID;			/**< ����������ǰ�õĻỰID*/
	DWORD	FrontID;			/**< ����ǰ�õı�ʶ */
	DWORD	GroupID;			/**< �������ʶ*/

	/**����Ա������������0
	*/
	inline void Init();
	
	/**�ı��Ա�������ֽ���
	*/
	inline void ChangeEndian();

	/**������������ݷ���pStream�����ı��ֽ���
	*@param pStream �����ı��ֽ�������ݵĻ�����
	*/
	inline void ToStream(char *pStream);

	/**��pStream�����ݷ��뱾���󣬲��ı��ֽ���
	*@param pStream �����ı��ֽ���ǰ���ݵĻ�����
	*/
	inline void FromStream(char *pStream);
};

inline void TXTPHeader::Init()
{
	memset(this, 0 ,sizeof(TXTPHeader));
}

inline void TXTPHeader::ChangeEndian()
{
	CHANGE_ENDIAN(ContentLength);
	CHANGE_ENDIAN(Tid);
	CHANGE_ENDIAN(GroupID);
	CHANGE_ENDIAN(SubjectID);
	CHANGE_ENDIAN(RequestID);
	CHANGE_ENDIAN(SessionID);
	CHANGE_ENDIAN(FrontID);
	CHANGE_ENDIAN(SequenceNo);
	CHANGE_ENDIAN(CommPhaseNo);
}

inline void TXTPHeader::ToStream(char *pStream)
{
	memcpy(pStream, this, sizeof(TXTPHeader));
	((TXTPHeader *)pStream)->ChangeEndian();
}

inline void TXTPHeader::FromStream(char *pStream)
{
	memcpy(this, pStream, sizeof(TXTPHeader));
	ChangeEndian();
}

const int  XTPHLEN	= sizeof(TXTPHeader);

/**������XTPProtocolЭ�����ʶ���Package
*/
class  CXTPPackage : public CFieldSet
{
public:
	/**���캯������ʼ����Ա������
	*/
	CXTPPackage();
		
	/**��������
	*/
	virtual ~CXTPPackage();
	
	/**��ð����ϲ�Э��ID������·��
	* @return ���ذ����ϲ�Э��ID
	*/
	virtual DWORD GetActiveID();
	
	/**������XTP��ͷ������Ƿ�XTP���ģ�������ÿ�����ƫ����
	* @return PROTERR_XTP_BADPACKAGAE һ������XTP����
	* @return >0 ������XTP��
	*/
	virtual int ValidPackage();
	
	/**��װ���ݰ�
	* @return 0 ��װ�ɹ�
	* @return <0 ��װʧ��
	*/
	virtual int MakePackage();

	/**��ȡXTP����ͷָ��
	*@return XTP����ͷָ��
	*/
	inline TXTPHeader *GetXTPHeader();
	
	/**����һ���µ�XTP��
	* @return ���Ƴ�����XTP��
	*/
	CXTPPackage *Clone();
	
	/**��ʼ����������
	*@param tid XTP���ĵ�id
	*@param chain XTP���ĵ�������־
	*@remark ���ø÷����󣬼������������Field
	*/
	void PrepareRequest(DWORD tid, BYTE chain = CHAIN_LAST);
	
	/**���������ĳ�ʼ����Ӧ����
	*@param pRequest ����XTP��
	*@param tid XTP���ĵ�id
	*@param chain XTP���ĵ�������־
	*@remark ���ø÷����󣬼������������Field
	*/
	void PrepareResponse(CXTPPackage *pRequest, DWORD tid, BYTE chain = CHAIN_LAST);
	
	/**��ʼ���ɷ�������
	*@param tid XTP���ĵ�id
	*@param chain XTP���ĵ�������־
	*@remark ���ø÷����󣬼������������Field
	*/
	void PreparePublish(DWORD tid, BYTE chain = CHAIN_LAST);

	/**��ȡXTP���ĵ�id
	*@return XTP���ĵ�id
	*/
	inline DWORD GetTid();

	/**����XTP���ĵ�id
	*@param tid Ҫ���õ�XTP���ĵ�id
	*/
	inline void SetTid(DWORD tid);

	/**��ȡXTP���ĵ�������־
	*@return XTP���ĵ�������־
	*/
	inline BYTE GetChain();

	/**����XTP���ĵ�������־
	*@param chain XTP���ĵ�������־
	*/
	inline void SetChain(BYTE chain);

	/**��ȡXTP���ĵ����
	*@return XTP���ĵ����
	*/
	inline DWORD GetSequenceNo();
	
	/**����XTP���ĵ����
	*@param SequenceNo XTP���ĵ����
	*/
	inline void SetSequenceNo(DWORD SequenceNo);

	/**��ȡXTP���ĵ�����
	*@return XTP���ĵ�����
	*/
	inline DWORD GetSubjectID();

	/**����XTP���ĵ�����
	*@param SequenceNo XTP���ĵ�����
	*/
	inline void SetSubjectID(DWORD SubjectID);
	
	/**��ȡXTP���ĵ�����ID
	*@return XTP���ĵ�����ID
	*/
	inline DWORD GetRequestID();
	inline void SetRequestID(DWORD RequestID);

	/**��ȡXTP���ĵĻỰID
	*@return XTP���ĵĻỰID
	*/
	inline DWORD GetSessionID();

	/**����XTP���ĵĻỰID
	*@param SequenceNo XTP���ĵĻỰID
	*/
	inline void SetSessionID(DWORD SessionID);

	/**��ȡXTP���ĵ�ǰ��ID
	*@return XTP���ĵ�ǰ��ID
	*/
	inline DWORD GetFrontID();

	/**����XTP���ĵ�ǰ��ID
	*@param SequenceNo XTP���ĵ�ǰ��ID
	*/
	inline void SetFrontID(DWORD FrontID);

	/**��ȡXTP���ĵ����ʶ
	*@return XTP���ĵ����ʶ
	*/
	inline DWORD GetGroupID();

	/**����XTP���ĵ����ʶ
	*@param SequenceNo XTP���ĵ����ʶ
	*/
	inline void SetGroupID(DWORD GroupID);

	/**�����������ͷ
	*/
	void OutputHeader(CLogger *pLogger);

	/**����һ��XTP����������ռ䡣�ռ��СΪ�����ռ䣫XTP����ļ�����
	* @param nReserve package�����ռ��С
	* @retrun ��������XTP��
	*/
	static CXTPPackage *CreatePackage(int nHeaderReserve);

protected:
	TXTPHeader m_XTPHeader;	  /**< XTP��ͷ*/
};

inline TXTPHeader *CXTPPackage::GetXTPHeader()
{ 
	return &m_XTPHeader;
}

inline DWORD CXTPPackage::GetTid()
{
	return m_XTPHeader.Tid;
}

inline void CXTPPackage::SetTid(DWORD tid)
{
	m_XTPHeader.Tid = tid;
}

inline BYTE CXTPPackage::GetChain()
{
	return m_XTPHeader.Chain;
}

inline void CXTPPackage::SetChain(BYTE chain)
{
	m_XTPHeader.Chain = chain;
}

inline DWORD CXTPPackage::GetSequenceNo()
{
	return m_XTPHeader.SequenceNo;
}

inline void CXTPPackage::SetSequenceNo(DWORD SequenceNo)
{
	m_XTPHeader.SequenceNo = SequenceNo;
}

inline DWORD CXTPPackage::GetSubjectID()
{
	return m_XTPHeader.SubjectID;
}

inline void CXTPPackage::SetSubjectID(DWORD SubjectID)
{
	m_XTPHeader.SubjectID = SubjectID;
}

inline DWORD CXTPPackage::GetRequestID()
{
	return m_XTPHeader.RequestID;
}

inline void CXTPPackage::SetRequestID(DWORD RequestID)
{
	m_XTPHeader.RequestID = RequestID;
}

inline DWORD CXTPPackage::GetSessionID()
{
	return m_XTPHeader.SessionID;
}

inline void CXTPPackage::SetSessionID(DWORD SessionID)
{
	m_XTPHeader.SessionID = SessionID;
}

inline DWORD CXTPPackage::GetFrontID()
{
	return m_XTPHeader.FrontID;
}

inline void CXTPPackage::SetFrontID(DWORD FrontID)
{
	m_XTPHeader.FrontID = FrontID;
}

inline DWORD CXTPPackage::GetGroupID()
{
	return m_XTPHeader.GroupID;
}

inline void CXTPPackage::SetGroupID(DWORD GroupID)
{
	m_XTPHeader.GroupID = GroupID;
}

#define XTP_GET_SINGLE_FIELD(pPackage, pField)	((pPackage)->GetSingleField(&((pField)->m_Describe), (pField)))
#define XTP_ADD_FIELD(pPackage, pField) ((pPackage)->AddField(&((pField)->m_Describe), (pField)))

#ifndef DEBUG_NOT_LOG
#define XTP_HEADER_DEBUG(pPackage)											\
	{ if (UseNetPackageLog)	(pPackage)->OutputHeader(CLogger::GetInstance()); }
#define XTP_PACKAGE_DEBUG(pPackage)											\
{																			\
	if (UseNetPackageLog)													\
	{																		\
		(pPackage)->OutputHeader(CLogger::GetInstance());						\
		XTP_DEBUG_BODY((pPackage)->GetTid(), pPackage, CLogger::GetInstance());	\
	}																		\
}
#else
#define XTP_HEADER_DEBUG(pPackage)
#define XTP_PACKAGE_DEBUG(pPackage)
#endif
#endif // !defined(AFX_XTPPACKAGE_H__266F38F0_E245_4E93_89AB_65BC7D438E18__INCLUDED_)
