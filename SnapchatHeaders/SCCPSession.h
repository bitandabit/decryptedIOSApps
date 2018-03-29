//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class GCDAsyncSocket, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString, SCCPDebugger, SCExperimentContext, SCGCDTimer, SCQueuePerformer, SCReachabilityWatcher, SCThrottledLogger;
@protocol SCCPSessionDelegate, SCCPSessionLogger;

@interface SCCPSession : NSObject <GCDAsyncSocketDelegate, SCNetworkConnectivityListener>
{
    _Bool _isShutDown;
    unsigned short _port;
    id <SCCPSessionDelegate> _delegate;
    id <SCCPSessionLogger> _logger;
    long long _socketErrorCode;
    SCExperimentContext *_networkPingIntervalExpContext;
    SCQueuePerformer *_performer;
    NSDictionary *_authDictionary;
    NSString *_userName;
    NSString *_host;
    NSData *_hostIpAddr;
    unsigned long long _nextWriteTag;
    unsigned long long _numberOfRetries;
    GCDAsyncSocket *_socket;
    long long _state;
    NSMutableDictionary *_writeCompletionHandlers;
    NSString *_activePingID;
    SCGCDTimer *_pingSendTimer;
    SCGCDTimer *_connectTimer;
    double _connectStartTime;
    long long _globalReachability;
    SCReachabilityWatcher *_connectionReachabilityWatcher;
    NSDate *_lastWwanToWifiTimestamp;
    SCThrottledLogger *_throttledLogger;
    SCCPDebugger *_debugger;
}

+ (id)globalReachabilityWatcher;
+ (double)retryDelay:(unsigned long long)arg1;
+ (id)startSessionWithDelegate:(id)arg1 dataSource:(id)arg2 logger:(id)arg3 performer:(id)arg4;
@property(retain, nonatomic) SCCPDebugger *debugger; // @synthesize debugger=_debugger;
@property(retain, nonatomic) SCThrottledLogger *throttledLogger; // @synthesize throttledLogger=_throttledLogger;
@property(retain, nonatomic) NSDate *lastWwanToWifiTimestamp; // @synthesize lastWwanToWifiTimestamp=_lastWwanToWifiTimestamp;
@property(retain, nonatomic) SCReachabilityWatcher *connectionReachabilityWatcher; // @synthesize connectionReachabilityWatcher=_connectionReachabilityWatcher;
@property(nonatomic) long long globalReachability; // @synthesize globalReachability=_globalReachability;
@property(nonatomic) double connectStartTime; // @synthesize connectStartTime=_connectStartTime;
@property(nonatomic) _Bool isShutDown; // @synthesize isShutDown=_isShutDown;
@property(retain, nonatomic) SCGCDTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(retain, nonatomic) SCGCDTimer *pingSendTimer; // @synthesize pingSendTimer=_pingSendTimer;
@property(copy, nonatomic) NSString *activePingID; // @synthesize activePingID=_activePingID;
@property(retain, nonatomic) NSMutableDictionary *writeCompletionHandlers; // @synthesize writeCompletionHandlers=_writeCompletionHandlers;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(nonatomic) unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) unsigned long long nextWriteTag; // @synthesize nextWriteTag=_nextWriteTag;
@property(copy, nonatomic) NSData *hostIpAddr; // @synthesize hostIpAddr=_hostIpAddr;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSDictionary *authDictionary; // @synthesize authDictionary=_authDictionary;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCExperimentContext *networkPingIntervalExpContext; // @synthesize networkPingIntervalExpContext=_networkPingIntervalExpContext;
@property(nonatomic, getter=getSocketErrorCode) long long socketErrorCode; // @synthesize socketErrorCode=_socketErrorCode;
@property(nonatomic) __weak id <SCCPSessionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SCCPSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_shouldResetConnectionForNewStatus:(long long)arg1 oldStatus:(long long)arg2;
- (void)addressPairReachabilityWatcherFired:(_Bool)arg1;
- (void)uninstallAddressPairReachabilityWatcher;
- (void)installAddressPairReachabilityWatcherFromAddress:(const void *)arg1 toAddress:(const void *)arg2;
- (_Bool)_isReachable:(long long)arg1;
- (void)uninstallGlobalReachabilityWatcher;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)installGlobalReachabilityWatcher;
- (void)completedWritingWithTag:(long long)arg1 error:(id)arg2;
- (void)markAllSendingMessagesFailed;
- (id)protocolErrorDictionaryWithMessage:(id)arg1;
- (id)disconnectDictionary;
- (id)connectDictionary;
- (void)writeDictionaryToSocket:(id)arg1;
- (void)handleDisconnectClientMessage:(id)arg1;
- (void)handlePingResponse:(id)arg1;
- (void)handleErrorResponse:(id)arg1;
- (void)handleProtocolErrorResponse:(id)arg1;
- (void)handleConnectResponse:(id)arg1;
- (void)handleNotificationResponse:(id)arg1;
- (void)handleBodyData:(id)arg1;
- (unsigned long long)lengthOfBodyFromHeaderData:(id)arg1;
- (id)getTLSSettings;
- (void)socketDidSecure:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetRetryCount;
- (void)retryConnectingToHost;
- (void)logConnectProgressWithSuccess:(_Bool)arg1;
- (void)connectionTimeoutTimerFired:(id)arg1;
- (void)startConnectionTimeoutTimer;
- (void)scheduleNextPing;
- (void)pingRequestCompletedWithStatus:(_Bool)arg1 error:(id)arg2;
- (void)makePingRequestWithTimeout:(double)arg1;
- (void)makePingRequest;
- (void)invalidateTimers;
- (void)disconnectWithError:(id)arg1;
- (void)terminateWithError:(id)arg1 updatedServerInfo:(id)arg2;
- (void)restartSessionWithRetryReset:(_Bool)arg1;
- (void)endSession;
- (void)startSession;
- (void)startSessionIfNotConnected;
- (_Bool)canUseDNSCache;
- (id)interfaceTransportString;
- (id)localInterface;
- (void)logSendAttempt;
- (id)debugInfo;
- (id)diagnosticStateString;
- (_Bool)isConnecting;
- (_Bool)isConnected;
- (id)_obfuscatedTextForText:(id)arg1;
- (void)writeParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)shutdown;
@property(readonly, copy) NSString *description;
- (id)initWithUsername:(id)arg1 Host:(id)arg2 HostIpAddr:(id)arg3 Port:(unsigned short)arg4 Auth:(id)arg5 Delegate:(id)arg6 logger:(id)arg7 performer:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
