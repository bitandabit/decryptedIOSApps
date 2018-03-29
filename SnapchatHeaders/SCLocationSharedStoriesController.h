//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLocationDataController-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCQueuePerformer;
@protocol SCLocationDataControllerDelegate;

@interface SCLocationSharedStoriesController : NSObject <SCLocationDataController>
{
    id <SCLocationDataControllerDelegate> delegate;
    NSArray *_sharedStories;
    NSMutableDictionary *_lastUpdatedTimestamps;
    SCQueuePerformer *_performer;
}

@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSMutableDictionary *lastUpdatedTimestamps; // @synthesize lastUpdatedTimestamps=_lastUpdatedTimestamps;
@property(copy, nonatomic) NSArray *sharedStories; // @synthesize sharedStories=_sharedStories;
@property(nonatomic) __weak id <SCLocationDataControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_pruneSharedStories;
- (_Bool)_sharedStoryIsValid:(id)arg1;
- (void)_updateSharedStoriesCacheWithSharedStories:(id)arg1;
- (void)clearCache;
- (void)processResponse:(id)arg1 location:(id)arg2;
- (void)updateCacheWithLocation:(id)arg1 newSession:(_Bool)arg2;
- (void)processSharedStoryResponse:(id)arg1;
- (void)processSharedStoryResponseArray:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)didDecodeObject;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

