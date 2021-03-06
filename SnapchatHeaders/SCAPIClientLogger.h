//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCAPIClientLogger : NSObject
{
}

+ (void)setPreloadInfoProvider:(id)arg1;
+ (id)preloadInfoProvider;
+ (id)requestFinished:(id)arg1 withResponse:(id)arg2 path:(id)arg3 startTime:(double)arg4 success:(_Bool)arg5 requestTypeStr:(id)arg6 isPaused:(_Bool)arg7 isResumable:(_Bool)arg8 isResumed:(_Bool)arg9 resumedDataBytes:(long long)arg10 requestSize:(double)arg11 responseSize:(double)arg12 hitCache:(_Bool)arg13 statusCode:(long long)arg14 startReachability:(long long)arg15 endReachability:(long long)arg16 responseDictionary:(id)arg17 userInfo:(id)arg18 trackingInfo:(id)arg19 countOfBytesSent:(long long)arg20 countOfBytesReceived:(long long)arg21 error:(id)arg22;
+ (id)requestFinished:(id)arg1 withResponse:(id)arg2 path:(id)arg3 startTime:(double)arg4 success:(_Bool)arg5 requestSize:(double)arg6 responseSize:(double)arg7 hitCache:(_Bool)arg8 statusCode:(long long)arg9 startReachability:(long long)arg10 endReachability:(long long)arg11 responseDictionary:(id)arg12 userInfo:(id)arg13 error:(id)arg14;
+ (id)requestFinished:(id)arg1 withResponse:(id)arg2 requestInfo:(id)arg3 success:(_Bool)arg4 responseSize:(double)arg5 hitCache:(_Bool)arg6 statusCode:(long long)arg7 endReachability:(long long)arg8 responseDictionary:(id)arg9 userInfo:(id)arg10 error:(id)arg11;
+ (void)logURLRequestCompletion:(id)arg1 requestSize:(unsigned long long)arg2 reachabilityStart:(id)arg3 timeInMillis:(long long)arg4 timeToFirstByteInMillis:(long long)arg5 timeToFirstBytesSent:(long long)arg6 response:(id)arg7 countOfBytesSent:(long long)arg8 countOfBytesReceived:(long long)arg9 requestKey:(id)arg10 reachabilityDurations:(id)arg11 networkRTTInMS:(id)arg12 parameters:(id)arg13 error:(id)arg14;
+ (void)logURLRequestStart:(id)arg1 name:(id)arg2 requestInfo:(id)arg3;
+ (id)getConnectionType;
+ (id)getCarrierName;

@end

