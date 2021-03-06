/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRf1xLogMsg : PLBasebandMessage {
    NSDate * _bbDate;
    NSNumber * _bbSeqnum;
    double * _bbTimeCal;
    NSArray * _callTypeDur;
    NSMutableDictionary * _commonInfo;
    NSNumber * _dtxOff;
    NSNumber * _dtxOn;
    NSString * _error;
    unsigned char  _inited;
    NSMutableDictionary * _kvPairs;
    NSNumber * _logDuration;
}

@property (retain) NSDate *bbDate;
@property (retain) NSNumber *bbSeqnum;
@property double*bbTimeCal;
@property (retain) NSArray *callTypeDur;
@property (nonatomic, retain) NSMutableDictionary *commonInfo;
@property (retain) NSNumber *dtxOff;
@property (retain) NSNumber *dtxOn;
@property (retain) NSString *error;
@property (nonatomic) unsigned char inited;
@property (nonatomic, retain) NSMutableDictionary *kvPairs;
@property (retain) NSNumber *logDuration;

+ (id)entryEventBackwardDefinitionBBMavHwRf1x;

- (void).cxx_destruct;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (id)bbDate;
- (id)bbSeqnum;
- (double*)bbTimeCal;
- (id)callTypeDur;
- (id)commonInfo;
- (id)dtxOff;
- (id)dtxOn;
- (id)error;
- (id)init;
- (unsigned char)inited;
- (id)kvPairs;
- (id)logDuration;
- (id)logEventBackwardBBMavHwRf1x;
- (void)populateEntry:(id)arg1;
- (void)refreshRequest;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)setBbDate:(id)arg1;
- (void)setBbSeqnum:(id)arg1;
- (void)setBbTimeCal:(double*)arg1;
- (void)setCallTypeDur:(id)arg1;
- (void)setCommonInfo:(id)arg1;
- (void)setDtxOff:(id)arg1;
- (void)setDtxOn:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setInited:(unsigned char)arg1;
- (void)setKvPairs:(id)arg1;
- (void)setLogDuration:(id)arg1;

@end
