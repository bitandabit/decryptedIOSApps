//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCLensInPreviewExperimentContext : SCExperimentContext
{
    _Bool _enableLensInPreviewPhoto;
    _Bool _enableLensInPreviewVideo;
    _Bool _requireFace;
    _Bool _showTooltip;
    _Bool _enableFirstLens;
}

@property(nonatomic) _Bool enableFirstLens; // @synthesize enableFirstLens=_enableFirstLens;
@property(nonatomic) _Bool showTooltip; // @synthesize showTooltip=_showTooltip;
@property(nonatomic) _Bool requireFace; // @synthesize requireFace=_requireFace;
@property(nonatomic) _Bool enableLensInPreviewVideo; // @synthesize enableLensInPreviewVideo=_enableLensInPreviewVideo;
@property(nonatomic) _Bool enableLensInPreviewPhoto; // @synthesize enableLensInPreviewPhoto=_enableLensInPreviewPhoto;
- (void)setupParameters;
- (id)experimentName;

@end

