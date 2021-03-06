//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TCV3TalkCoreParameters : NSObject
{
    _Bool _isDebugOrMaster;
    int _userExpireTimeoutMs;
    int _presenceBroadcastIntervalMs;
    int _ringingTimeoutMs;
    int _connectingTimeoutMs;
    int _maxReconnectTimeoutMs;
    int _delayBeforeReconnectMs;
    int _timeoutBeforeReportingMissedCallMs;
    int _typingPauseTimeoutMs;
    int _typingCancelTimeoutMs;
    NSString *_localUsername;
    NSString *_cspmEventFilePath;
    NSString *_deviceName;
}

+ (id)TalkCoreParametersWithLocalUsername:(id)arg1 userExpireTimeoutMs:(int)arg2 presenceBroadcastIntervalMs:(int)arg3 ringingTimeoutMs:(int)arg4 connectingTimeoutMs:(int)arg5 maxReconnectTimeoutMs:(int)arg6 delayBeforeReconnectMs:(int)arg7 cspmEventFilePath:(id)arg8 deviceName:(id)arg9 timeoutBeforeReportingMissedCallMs:(int)arg10 typingPauseTimeoutMs:(int)arg11 typingCancelTimeoutMs:(int)arg12 isDebugOrMaster:(_Bool)arg13;
@property(readonly, nonatomic) _Bool isDebugOrMaster; // @synthesize isDebugOrMaster=_isDebugOrMaster;
@property(readonly, nonatomic) int typingCancelTimeoutMs; // @synthesize typingCancelTimeoutMs=_typingCancelTimeoutMs;
@property(readonly, nonatomic) int typingPauseTimeoutMs; // @synthesize typingPauseTimeoutMs=_typingPauseTimeoutMs;
@property(readonly, nonatomic) int timeoutBeforeReportingMissedCallMs; // @synthesize timeoutBeforeReportingMissedCallMs=_timeoutBeforeReportingMissedCallMs;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *cspmEventFilePath; // @synthesize cspmEventFilePath=_cspmEventFilePath;
@property(readonly, nonatomic) int delayBeforeReconnectMs; // @synthesize delayBeforeReconnectMs=_delayBeforeReconnectMs;
@property(readonly, nonatomic) int maxReconnectTimeoutMs; // @synthesize maxReconnectTimeoutMs=_maxReconnectTimeoutMs;
@property(readonly, nonatomic) int connectingTimeoutMs; // @synthesize connectingTimeoutMs=_connectingTimeoutMs;
@property(readonly, nonatomic) int ringingTimeoutMs; // @synthesize ringingTimeoutMs=_ringingTimeoutMs;
@property(readonly, nonatomic) int presenceBroadcastIntervalMs; // @synthesize presenceBroadcastIntervalMs=_presenceBroadcastIntervalMs;
@property(readonly, nonatomic) int userExpireTimeoutMs; // @synthesize userExpireTimeoutMs=_userExpireTimeoutMs;
@property(readonly, nonatomic) NSString *localUsername; // @synthesize localUsername=_localUsername;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalUsername:(id)arg1 userExpireTimeoutMs:(int)arg2 presenceBroadcastIntervalMs:(int)arg3 ringingTimeoutMs:(int)arg4 connectingTimeoutMs:(int)arg5 maxReconnectTimeoutMs:(int)arg6 delayBeforeReconnectMs:(int)arg7 cspmEventFilePath:(id)arg8 deviceName:(id)arg9 timeoutBeforeReportingMissedCallMs:(int)arg10 typingPauseTimeoutMs:(int)arg11 typingCancelTimeoutMs:(int)arg12 isDebugOrMaster:(_Bool)arg13;

@end

