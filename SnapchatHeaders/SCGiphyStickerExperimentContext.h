//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCGiphyStickerExperimentContext : SCExperimentContext
{
    _Bool _enableGiphySticker;
    _Bool _shouldUseGiphyMetadataProxy;
    _Bool _stickerSearchAnimatedTooltipEnabled;
}

@property(readonly, nonatomic) _Bool stickerSearchAnimatedTooltipEnabled; // @synthesize stickerSearchAnimatedTooltipEnabled=_stickerSearchAnimatedTooltipEnabled;
@property(readonly, nonatomic) _Bool shouldUseGiphyMetadataProxy; // @synthesize shouldUseGiphyMetadataProxy=_shouldUseGiphyMetadataProxy;
@property(readonly, nonatomic) _Bool enableGiphySticker; // @synthesize enableGiphySticker=_enableGiphySticker;
- (void)setupParameters;
- (id)experimentName;

@end

