//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCPromotedStoriesSnapMetricsExperimentContext : SCExperimentContext
{
    _Bool _shouldEnableSnapMetrics;
}

@property(readonly, nonatomic) _Bool shouldEnableSnapMetrics; // @synthesize shouldEnableSnapMetrics=_shouldEnableSnapMetrics;
- (void)setupParameters;
- (id)experimentName;

@end
