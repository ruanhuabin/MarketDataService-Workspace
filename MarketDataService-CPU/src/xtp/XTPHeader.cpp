#include <iostream>
#include <cstdio>
#include <iomanip>
#include <stdio.h>
#include <string.h>

#include "Endian.h"
#include "XTPHeader.h"
#include "logger.h"

void XTPHeader::print() const {
  using namespace boost;
  DEBUG() << "Package Header";
  DEBUG() << "------------------------------";
  DEBUG() << format("Type: %#x")              % static_cast<uint32_t>(Type);
  DEBUG() << format("Chain: %#x")             % static_cast<uint32_t>(Chain);
  DEBUG() << format("FTType: %#x")            % static_cast<uint32_t>(FTType);
  DEBUG() << format("ContentLength: %u")      % static_cast<uint32_t>(ContentLength);
  DEBUG() << format("SubjectID: %#010x")      % static_cast<uint32_t>(SubjectID);
  DEBUG() << format("Tid: %#010x")            % static_cast<uint32_t>(Tid);
  DEBUG() << format("CommPhaseNo: %u")        % static_cast<uint32_t>(CommPhaseNo);
  DEBUG() << format("SequenceNo: %u")         % static_cast<uint32_t>(SequenceNo);
  DEBUG() << format("FrontSeqNo: %u")         % static_cast<uint32_t>(FrontSeqNo);
  DEBUG() << format("RequestID: %u")          % static_cast<uint32_t>(RequestID);
  DEBUG() << format("SessionID: %u")          % static_cast<uint32_t>(SessionID);
  DEBUG() << format("FrontID: %u")            % static_cast<uint32_t>(FrontID);
  DEBUG() << format("GroupID: %u")            % static_cast<uint32_t>(GroupID);
  DEBUG() << format("OldSubjectID: %#010x")   % static_cast<uint32_t>(OldSubjectID);
  DEBUG() << format("ConvergenceID: %#010x")  % static_cast<uint32_t>(ConvergenceID);
  DEBUG() << format("OldSequenceNo: %u")      % static_cast<uint32_t>(OldSequenceNo);
  DEBUG() << format("PubNodeID: %u")          % static_cast<uint32_t>(PubNodeID);
  DEBUG() << format("RiskID: %#x")            % static_cast<uint32_t>(RiskID);
  DEBUG() << format("MatchID: %#x")           % static_cast<uint32_t>(MatchID);
  DEBUG() << format("ErrorID: %#x")           % static_cast<uint32_t>(ErrorID);
  DEBUG() << "------------------------------";
}

void XTPHeader::set_all(uint16_t content_length){
	Type = 'P';
	Chain = 0x4c;
	FTType = 0x57;
	ContentLength = content_length;
	SubjectID= 69633;
	Tid = 0x5804;
	CommPhaseNo = 11804;
	static int SequenceNo_count = 1;
	SequenceNo = SequenceNo_count;
	RequestID = 0;
	SessionID = 0;
	FrontID = 0;
	GroupID = 62842;
	OldSubjectID = 0;
	ConvergenceID = 0X551CA81A;
	OldSequenceNo = SequenceNo_count++;
	PubNodeID = 4354;
	RiskID = 0;
	MatchID = 0;
	ErrorID = 0;

	convertEndian(&ContentLength);
	convertEndian(&SubjectID);
	convertEndian(&Tid);
	convertEndian(&CommPhaseNo);
	convertEndian(&SequenceNo);
	convertEndian(&FrontSeqNo);
	convertEndian(&RequestID);
	convertEndian(&SessionID);
	convertEndian(&FrontID);
	convertEndian(&GroupID);
	convertEndian(&OldSubjectID);
	convertEndian(&ConvergenceID);
	convertEndian(&OldSequenceNo);
	convertEndian(&PubNodeID);
	convertEndian(&RiskID);
	convertEndian(&MatchID);
	convertEndian(&ErrorID);
}
