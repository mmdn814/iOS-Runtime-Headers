/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEndpointConfig : PBCodable <NSCopying> {
    NSString * _clientApiBaseUrl;
    int  _environment;
    NSString * _eventRelayBaseUrl;
    NSString * _eventRelayBatchBaseUrl;
    NSString * _newsNotificationsBaseUrl;
}

@property (nonatomic, retain) NSString *clientApiBaseUrl;
@property (nonatomic) int environment;
@property (nonatomic, retain) NSString *eventRelayBaseUrl;
@property (nonatomic, retain) NSString *eventRelayBatchBaseUrl;
@property (nonatomic, readonly) BOOL hasClientApiBaseUrl;
@property (nonatomic, readonly) BOOL hasEventRelayBaseUrl;
@property (nonatomic, readonly) BOOL hasEventRelayBatchBaseUrl;
@property (nonatomic, readonly) BOOL hasNewsNotificationsBaseUrl;
@property (nonatomic, retain) NSString *newsNotificationsBaseUrl;

- (void).cxx_destruct;
- (id)clientApiBaseUrl;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)environment;
- (id)eventRelayBaseUrl;
- (id)eventRelayBatchBaseUrl;
- (BOOL)hasClientApiBaseUrl;
- (BOOL)hasEventRelayBaseUrl;
- (BOOL)hasEventRelayBatchBaseUrl;
- (BOOL)hasNewsNotificationsBaseUrl;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newsNotificationsBaseUrl;
- (BOOL)readFrom:(id)arg1;
- (void)setClientApiBaseUrl:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setEventRelayBaseUrl:(id)arg1;
- (void)setEventRelayBatchBaseUrl:(id)arg1;
- (void)setNewsNotificationsBaseUrl:(id)arg1;
- (void)writeTo:(id)arg1;

@end
