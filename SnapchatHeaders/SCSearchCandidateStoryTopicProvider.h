//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, SCExperimentManager, SCSearchCachedRequestManager;

@interface SCSearchCandidateStoryTopicProvider : NSObject
{
    SCSearchCachedRequestManager *_cachedRequestManager;
    SCExperimentManager *_experimentManager;
    NSArray *_topics;
    NSDate *_lastUpdatedDate;
}

@property(readonly, copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
- (void).cxx_destruct;
- (id)_matchedTopicsForStoryCaption:(id)arg1 withNumberOfTopicsLimit:(unsigned long long)arg2 highQualityTopicsOnly:(_Bool)arg3 shouldAddQuotes:(_Bool)arg4;
- (void)_updateWithTopics:(id)arg1 updatedDate:(id)arg2;
- (void)_handleCachedResponse:(id)arg1 request:(id)arg2 shouldInvalidateCachedData:(_Bool *)arg3;
- (void)_loadTopicsWithSharedStories:(id)arg1;
- (void)_fetchOurStory;
- (void)_reloadTopics;
@property(readonly, copy, nonatomic) NSArray *topics;
- (id)topicsSuffix;
- (id)matchedHighQualityTopicForStoryCaption:(id)arg1;
- (id)matchedTopicsForStoryCaption:(id)arg1;
- (void)updateTopicsIfNeeded;
- (id)initWithSessionRequestManager:(id)arg1 experimentManager:(id)arg2;

@end
