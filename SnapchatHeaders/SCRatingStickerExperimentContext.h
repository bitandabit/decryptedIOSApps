//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCRatingStickerExperimentContext : SCExperimentContext
{
    _Bool _shouldEnableRatingStickerInHometab;
    _Bool _shouldEnableRatingStickerInFilter;
}

@property(readonly, nonatomic) _Bool shouldEnableRatingStickerInFilter; // @synthesize shouldEnableRatingStickerInFilter=_shouldEnableRatingStickerInFilter;
@property(readonly, nonatomic) _Bool shouldEnableRatingStickerInHometab; // @synthesize shouldEnableRatingStickerInHometab=_shouldEnableRatingStickerInHometab;
- (void)setupParameters;
- (id)experimentName;

@end

