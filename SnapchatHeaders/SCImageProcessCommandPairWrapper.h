//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCImageProcessCommand;

@interface SCImageProcessCommandPairWrapper : NSObject
{
    SCImageProcessCommand *_leftCommand;
    SCImageProcessCommand *_rightCommand;
    float _alpha;
    _Bool _isLandscape;
}

- (void).cxx_destruct;
- (void)unload;
- (id)runWithContext:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 outputWidth:(unsigned long long)arg5 outputHeight:(unsigned long long)arg6 orientation:(long long)arg7 viewportTransform:(struct CGAffineTransform)arg8;
- (void)loadWithContext:(id)arg1;
@property(readonly, nonatomic) _Bool isLoaded;
- (id)initWithLeftCommand:(id)arg1 rightCommand:(id)arg2 alpha:(float)arg3 isLandscape:(_Bool)arg4;

@end

