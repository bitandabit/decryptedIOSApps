//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCUnlockedFilterImageProvider;
@protocol SCLensEffectActivator, SCPerforming;

@interface SCLensUnlockedFilterImageHelper : NSObject
{
    id <SCLensEffectActivator> _lensEffectActivator;
    SCUnlockedFilterImageProvider *_unlockedFilterImageProvider;
    id <SCPerforming> _filterImageDataPerformer;
}

- (void).cxx_destruct;
- (id)_geoFilterFilePath:(id)arg1;
- (void)removeUnlockedFilterWithId:(id)arg1;
- (void)setUnlockedFilterWithId:(id)arg1 externalImageComponent:(id)arg2 videoProcessingComponent:(id)arg3;
- (id)initWithUserSession:(id)arg1 lensEffectActivator:(id)arg2;

@end

