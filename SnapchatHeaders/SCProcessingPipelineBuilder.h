//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCProcessingPipelineBuilder : NSObject
{
    _Bool _useExposureAdjust;
    _Bool _portraitModeEnabled;
    _Bool _enhancedNightMode;
}

@property(nonatomic) _Bool enhancedNightMode; // @synthesize enhancedNightMode=_enhancedNightMode;
@property(nonatomic) _Bool portraitModeEnabled; // @synthesize portraitModeEnabled=_portraitModeEnabled;
@property(nonatomic) _Bool useExposureAdjust; // @synthesize useExposureAdjust=_useExposureAdjust;
- (id)build;

@end

