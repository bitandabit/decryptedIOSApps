//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSSet, NSString;

@protocol TCV3MetricsReporter
- (void)reportCallEvent:(long long)arg1 callUuid:(NSString *)arg2 initialMediaType:(long long)arg3 endPhase:(long long)arg4 intParams:(NSDictionary *)arg5 floatParams:(NSDictionary *)arg6 correspondentId:(NSString *)arg7;
- (void)reportPresenceEvent:(NSSet *)arg1 parameters:(NSDictionary *)arg2 correspondentId:(NSString *)arg3;
@end

