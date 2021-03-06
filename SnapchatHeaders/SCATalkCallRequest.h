//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATalkCallEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCATalkCallRequest : SCATalkCallEventBase <MapSerializable, NSCopying>
{
    NSNumber *withIncomingCallAbandon;
    NSNumber *withPresence;
    NSNumber *withLocalUserRejected;
    long long endPhase;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getEndPhase;
- (void)setEndPhase:(long long)arg1;
- (_Bool)getWithLocalUserRejected;
- (void)setWithLocalUserRejected:(_Bool)arg1;
- (_Bool)getWithPresence;
- (void)setWithPresence:(_Bool)arg1;
- (_Bool)getWithIncomingCallAbandon;
- (void)setWithIncomingCallAbandon:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCallUUID:(id)arg1 initialMediaType:(long long)arg2 endPhase:(long long)arg3 intParams:(id)arg4 floatParams:(id)arg5 correspondentId:(id)arg6;

@end

