//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SCLens;

@interface SCOnDemandLensOnCameraFilterResultBuilder : NSObject
{
    SCLens *_onDemandGeoLens;
    NSArray *_frontGeoLenses;
    NSArray *_backGeoLenses;
    NSArray *_onDemandGeoLenses;
}

+ (id)withOnDemandLensOnCameraFilterResult:(id)arg1;
- (void).cxx_destruct;
- (id)setOnDemandGeoLenses:(id)arg1;
- (id)setBackGeoLenses:(id)arg1;
- (id)setFrontGeoLenses:(id)arg1;
- (id)setOnDemandGeoLens:(id)arg1;
- (id)build;

@end
