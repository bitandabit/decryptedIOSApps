//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCAOperaView : NSObject <NamedEvent, NSCopying>
{
    NSNumber *snapIndexPos;
    NSNumber *snapIndexCount;
    NSNumber *isAd;
    long long source;
    NSString *viewSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getViewSessionId;
- (void)setViewSessionId:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (_Bool)getIsAd;
- (void)setIsAd:(_Bool)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

