//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMemoriesFeaturedStoryExperimentContext : SCExperimentContext
{
    _Bool _enableFeaturedStory;
    _Bool _enableFeaturedStoryBadge;
}

@property(readonly, nonatomic) _Bool enableFeaturedStoryBadge; // @synthesize enableFeaturedStoryBadge=_enableFeaturedStoryBadge;
@property(readonly, nonatomic) _Bool enableFeaturedStory; // @synthesize enableFeaturedStory=_enableFeaturedStory;
- (void)setupParameters;
- (id)experimentName;

@end
