//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, SCGroupStoryPublication, SCMyStories, Story;

@interface SCProfileV3MyStoryCellViewModel : NSObject
{
    _Bool _expanded;
    _Bool _isContributionStory;
    _Bool _allowsAddToStory;
    _Bool _hasStories;
    _Bool _hasDelayedStories;
    _Bool _isGroupStory;
    _Bool _isGroupChatStory;
    _Bool _isCustomStory;
    _Bool _isSharedStory;
    _Bool _isGeoStory;
    _Bool _isOurStory;
    _Bool _isOfficialStory;
    _Bool _isSaveable;
    _Bool _isRefresh;
    _Bool _shouldHighlightViewCount;
    SCMyStories *_myStories;
    NSArray *_featuredStoryTitles;
    SCGroupStoryPublication *_publication;
    Story *_latestStory;
    long long _batchState;
    unsigned long long _numPostingStories;
    unsigned long long _numFailedStories;
    NSString *_displayName;
    NSString *_username;
    double _unexpandedHeight;
    NSString *_myStoriesIdentifier;
}

@property(readonly, nonatomic) _Bool shouldHighlightViewCount; // @synthesize shouldHighlightViewCount=_shouldHighlightViewCount;
@property(readonly, nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(readonly, nonatomic) NSString *myStoriesIdentifier; // @synthesize myStoriesIdentifier=_myStoriesIdentifier;
@property(readonly, nonatomic) double unexpandedHeight; // @synthesize unexpandedHeight=_unexpandedHeight;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned long long numFailedStories; // @synthesize numFailedStories=_numFailedStories;
@property(readonly, nonatomic) unsigned long long numPostingStories; // @synthesize numPostingStories=_numPostingStories;
@property(readonly, nonatomic) long long batchState; // @synthesize batchState=_batchState;
@property(readonly, nonatomic) Story *latestStory; // @synthesize latestStory=_latestStory;
@property(readonly, nonatomic) _Bool isSaveable; // @synthesize isSaveable=_isSaveable;
@property(readonly, nonatomic) _Bool isOfficialStory; // @synthesize isOfficialStory=_isOfficialStory;
@property(readonly, nonatomic) _Bool isOurStory; // @synthesize isOurStory=_isOurStory;
@property(readonly, nonatomic) _Bool isGeoStory; // @synthesize isGeoStory=_isGeoStory;
@property(readonly, nonatomic) _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(readonly, nonatomic) _Bool isCustomStory; // @synthesize isCustomStory=_isCustomStory;
@property(readonly, nonatomic) _Bool isGroupChatStory; // @synthesize isGroupChatStory=_isGroupChatStory;
@property(readonly, nonatomic) _Bool isGroupStory; // @synthesize isGroupStory=_isGroupStory;
@property(readonly, nonatomic) _Bool hasDelayedStories; // @synthesize hasDelayedStories=_hasDelayedStories;
@property(readonly, nonatomic) _Bool hasStories; // @synthesize hasStories=_hasStories;
@property(readonly, nonatomic) SCGroupStoryPublication *publication; // @synthesize publication=_publication;
@property(readonly, nonatomic) NSArray *featuredStoryTitles; // @synthesize featuredStoryTitles=_featuredStoryTitles;
@property(readonly, nonatomic) _Bool allowsAddToStory; // @synthesize allowsAddToStory=_allowsAddToStory;
@property(readonly, nonatomic) _Bool isContributionStory; // @synthesize isContributionStory=_isContributionStory;
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) SCMyStories *myStories; // @synthesize myStories=_myStories;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned long long screenshottedCount;
@property(readonly, nonatomic) unsigned long long viewedCount;
- (id)initWithMyStories:(id)arg1 expanded:(_Bool)arg2 allowsAddToStory:(_Bool)arg3 featuredStoryTitles:(id)arg4 publication:(id)arg5 unexpandedHeight:(double)arg6 myStoriesIdentifier:(id)arg7 isRefresh:(_Bool)arg8 shouldHighlightViewCount:(_Bool)arg9;

@end

