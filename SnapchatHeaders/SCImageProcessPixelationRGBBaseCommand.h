//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class NSData;

@interface SCImageProcessPixelationRGBBaseCommand : SCImageProcessCommand
{
    int _imageTexture2;
    int _displayTileSize;
    unsigned int _pixelationTexture;
    NSData *_maskData;
    struct CGSize _outputSize;
    long long _tilesCount;
}

+ (id)commandWithMaskData:(id)arg1 outputSize:(struct CGSize)arg2 tilesCount:(long long)arg3 isPixelBlend:(_Bool)arg4;
- (void).cxx_destruct;
- (void)unload;
- (id)runWithContext:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 outputWidth:(unsigned long long)arg5 outputHeight:(unsigned long long)arg6 renderRange:(CDStruct_6fe4de6c)arg7 orientation:(long long)arg8 viewportTransform:(struct CGAffineTransform)arg9;
- (void)loadWithContext:(id)arg1;
- (id)initWithMaskData:(id)arg1 outputSize:(struct CGSize)arg2 tilesCount:(long long)arg3 isPixelBlend:(_Bool)arg4;

@end

