//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface SCLocationManagerStateBuilder : NSObject
{
    _Bool _updatingLocation;
    double _locationAccuracy;
    _Bool _allowsBackground;
    _Bool _updatingHeading;
    NSSet *_observingBeaconRegions;
}

+ (id)withLocationManagerState:(id)arg1;
- (void).cxx_destruct;
- (id)setObservingBeaconRegions:(id)arg1;
- (id)setUpdatingHeading:(_Bool)arg1;
- (id)setAllowsBackground:(_Bool)arg1;
- (id)setLocationAccuracy:(double)arg1;
- (id)setUpdatingLocation:(_Bool)arg1;
- (id)build;

@end
