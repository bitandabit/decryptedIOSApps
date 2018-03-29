//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCAdOwnerProtocol-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCStoryAdStreamRequestInfo, Story;
@protocol SCSnapAdsAdStreamEventListener;

@interface SCStoryAdStream : NSObject <SCTimeProfilable, NSCoding, SCAdOwnerProtocol>
{
    Story *_currentAdSnap;
    _Bool _inPlayback;
    _Bool _inLiveSection;
    NSMutableDictionary *_insertedAdStories;
    NSMutableDictionary *_insertedNoFillRecords;
    SCStoryAdStreamRequestInfo *_adStreamRequestInfo;
    long long _nextPosition;
    long long _nextUnviewedPosition;
    NSMutableDictionary *_adResponseV2Cache;
    NSMutableSet *_positionsWithInFlightRequests;
    id <SCSnapAdsAdStreamEventListener> _listenerV2;
    double _sleepTimeBetweenRetriesSeconds;
    NSString *_currentAdRequestClientId;
    NSMutableDictionary *_persistedMediaIds;
}

+ (int)context;
@property(retain, nonatomic) NSMutableDictionary *persistedMediaIds; // @synthesize persistedMediaIds=_persistedMediaIds;
@property(retain, nonatomic) NSString *currentAdRequestClientId; // @synthesize currentAdRequestClientId=_currentAdRequestClientId;
@property(nonatomic) double sleepTimeBetweenRetriesSeconds; // @synthesize sleepTimeBetweenRetriesSeconds=_sleepTimeBetweenRetriesSeconds;
@property(retain, nonatomic) id <SCSnapAdsAdStreamEventListener> listenerV2; // @synthesize listenerV2=_listenerV2;
@property(nonatomic) _Bool inLiveSection; // @synthesize inLiveSection=_inLiveSection;
@property(nonatomic) _Bool inPlayback; // @synthesize inPlayback=_inPlayback;
@property(retain, nonatomic) NSMutableSet *positionsWithInFlightRequests; // @synthesize positionsWithInFlightRequests=_positionsWithInFlightRequests;
@property(retain, nonatomic) NSMutableDictionary *adResponseV2Cache; // @synthesize adResponseV2Cache=_adResponseV2Cache;
@property(nonatomic) long long nextUnviewedPosition; // @synthesize nextUnviewedPosition=_nextUnviewedPosition;
@property(nonatomic) long long nextPosition; // @synthesize nextPosition=_nextPosition;
@property(retain, nonatomic) SCStoryAdStreamRequestInfo *adStreamRequestInfo; // @synthesize adStreamRequestInfo=_adStreamRequestInfo;
@property(retain, nonatomic) NSMutableDictionary *insertedNoFillRecords; // @synthesize insertedNoFillRecords=_insertedNoFillRecords;
@property(retain, nonatomic) NSMutableDictionary *insertedAdStories; // @synthesize insertedAdStories=_insertedAdStories;
- (void).cxx_destruct;
- (id)adResponseCacheKey:(id)arg1 position:(long long)arg2;
- (id)viewContext:(_Bool)arg1 lastInteraction:(id)arg2 story:(id)arg3 friendStories:(id)arg4 storyPosition:(long long)arg5;
- (id)cacheAdIds;
- (void)resetCurrentAdRequestClientId;
- (void)error:(id)arg1 withRemaining:(long long)arg2;
- (void)cleanupForAdResponse:(id)arg1;
- (void)trackStreamPausedWithSnapsRemaining:(unsigned long long)arg1 storyPosition:(unsigned long long)arg2 lastInteraction:(id)arg3 friendStories:(id)arg4;
- (_Bool)trackViewClose:(id)arg1 withRemaining:(long long)arg2 storyPosition:(unsigned long long)arg3 context:(id)arg4 params:(id)arg5 lastInteraction:(id)arg6 story:(id)arg7 friendStories:(id)arg8;
- (void)trackOnHideEvent:(id)arg1 withRemaining:(long long)arg2 storyPosition:(unsigned long long)arg3 lastInteraction:(id)arg4 story:(id)arg5 friendStories:(id)arg6;
- (void)trackNoFill:(id)arg1 withRemaining:(long long)arg2 storyPosition:(unsigned long long)arg3 story:(id)arg4 friendStories:(id)arg5;
- (void)trackOnShowEvent:(id)arg1 story:(id)arg2 isViewingLongform:(_Bool)arg3;
- (void)updateCacheAndPositionState:(id)arg1;
- (void)removeResponseFromCache:(id)arg1;
- (void)updatePositionWithAdResponse:(id)arg1;
- (void)sendAdResolutionErrorToListenerV2:(unsigned long long)arg1;
- (void)sendAdResponseToListener:(id)arg1;
- (void)registerAdResponseFailure:(id)arg1 withAdStreamPosition:(long long)arg2;
- (void)registerAdResponse:(id)arg1;
- (void)resetSleepTimeBetweenRetries;
- (void)updateSleepTimeBetweenRetries;
- (id)nextAdResponseV2;
- (_Bool)isPositionSensitive;
- (void)makeNextAdRequestIfNecessary:(long long)arg1;
- (void)makeAdRequestForPosition:(long long)arg1;
- (id)adPlacementForPosition:(long long)arg1 adRequestClientId:(id)arg2;
- (_Bool)shouldMakeNextAdRequest;
- (void)readyNextAdResponse:(long long)arg1;
- (void)updateSnapsRemaining:(long long)arg1;
- (void)cleanUpForStopPlayback;
- (void)startPlayback:(long long)arg1 inLiveSection:(_Bool)arg2 isResume:(_Bool)arg3;
- (long long)secondsAdResponsesValidFor;
- (id)targetingParams;
- (id)adUnitId;
- (id)key;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithRequestInfo:(id)arg1 withListener:(id)arg2;
- (id)initWithRequestInfo:(id)arg1 withListener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

