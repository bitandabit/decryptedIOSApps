//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCImageProcessLookseryEffectCommand, SCLens;

@protocol SCImageProcessLensCommandDelegate
- (void)imageProcessLensCommand:(SCImageProcessLookseryEffectCommand *)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(SCImageProcessLookseryEffectCommand *)arg1 didRecognizeExpression:(NSString *)arg2;
- (void)imageProcessLensCommand:(SCImageProcessLookseryEffectCommand *)arg1 didFinishProcessingFrameWithLens:(SCLens *)arg2;
@end

