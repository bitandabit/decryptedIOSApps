//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCJapanLocaleBehaviorExperimentContext : SCExperimentContext
{
    _Bool _enableToolsOrderBehavior;
    _Bool _enableDefaultFilterBehavior;
    _Bool _enablePinnedLensesBehavior;
}

@property(nonatomic) _Bool enablePinnedLensesBehavior; // @synthesize enablePinnedLensesBehavior=_enablePinnedLensesBehavior;
@property(nonatomic) _Bool enableDefaultFilterBehavior; // @synthesize enableDefaultFilterBehavior=_enableDefaultFilterBehavior;
@property(nonatomic) _Bool enableToolsOrderBehavior; // @synthesize enableToolsOrderBehavior=_enableToolsOrderBehavior;
- (void)setupParameters;
- (id)experimentName;

@end

