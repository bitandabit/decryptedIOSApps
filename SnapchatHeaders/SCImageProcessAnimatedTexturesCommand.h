//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class NSArray;

@interface SCImageProcessAnimatedTexturesCommand : SCImageProcessCommand
{
    int _verticesPosition;
    int _texCoordsPosition;
    int _imageTexturePosition;
    unsigned int _texture;
    NSArray *_images;
    NSArray *_tintColors;
    double _startTime;
}

- (void).cxx_destruct;
- (id)runWithContext:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 outputWidth:(unsigned long long)arg5 outputHeight:(unsigned long long)arg6 renderRange:(CDStruct_6fe4de6c)arg7 orientation:(long long)arg8 viewportTransform:(struct CGAffineTransform)arg9;
- (void)unload;
- (void)loadWithContext:(id)arg1;
- (id)initWithImages:(id)arg1 tintColors:(id)arg2;
- (id)initWithImages:(id)arg1;

@end

