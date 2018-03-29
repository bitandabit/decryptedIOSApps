//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface SCSnapCraftImageUtils : NSObject
{
    UIImage *_originalUIImage;
    struct Mat _original;
    struct Mat _splitOriginal[3];
    struct Mat _splitStylized[3];
    long long _originalOrientation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)stylize:(id)arg1;
- (id)mixLuminanceAndColor:(float)arg1;
- (void)_splitUIImageToLab:(id)arg1 dest:(struct Mat *)arg2;
- (void)setStylized:(id)arg1;
- (void)splitToLab:(struct Mat)arg1 dest:(struct Mat *)arg2;
- (void)_fromRGBAtoRGB:(struct Mat)arg1 dest:(struct Mat *)arg2;
- (void)precomputeLabSplit;
- (void)updateImage:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

