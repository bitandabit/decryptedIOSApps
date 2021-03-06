//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSDictionary, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig;

@interface SCUserStoryLoadingConfig : NSObject <NSCoding>
{
    NSDictionary *_preloadUserSOJUCounts;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_defaultLookaheadPrecache;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_feedCarouselLookaheadPrecache;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_feedLookaheadPrecache;
    NSDate *_lastUpdateTime;
}

+ (id)defaultLocalConfig;
@property(readonly, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(readonly, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *feedLookaheadPrecache; // @synthesize feedLookaheadPrecache=_feedLookaheadPrecache;
@property(readonly, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *feedCarouselLookaheadPrecache; // @synthesize feedCarouselLookaheadPrecache=_feedCarouselLookaheadPrecache;
@property(readonly, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *defaultLookaheadPrecache; // @synthesize defaultLookaheadPrecache=_defaultLookaheadPrecache;
@property(readonly, copy, nonatomic) NSDictionary *preloadUserSOJUCounts; // @synthesize preloadUserSOJUCounts=_preloadUserSOJUCounts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSojuConfig:(id)arg1;

@end

