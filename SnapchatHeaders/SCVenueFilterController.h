//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLocationDataController-Protocol.h"

@class CLLocation, NSString, SCVenueFilterSelector;
@protocol SCLocationDataControllerDelegate, SCPerforming;

@interface SCVenueFilterController : NSObject <SCLocationDataController>
{
    id <SCLocationDataControllerDelegate> delegate;
    CLLocation *_lastLocation;
    SCVenueFilterSelector *_venueSelector;
    id <SCPerforming> _processPerformer;
}

+ (double)accuracyForRemovingFiltersFromCache;
@property(readonly, nonatomic) id <SCPerforming> processPerformer; // @synthesize processPerformer=_processPerformer;
@property(retain, nonatomic) SCVenueFilterSelector *venueSelector; // @synthesize venueSelector=_venueSelector;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) __weak id <SCLocationDataControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)clearCache;
- (void)updateCacheWithLocation:(id)arg1 newSession:(_Bool)arg2;
- (void)processResponse:(id)arg1 location:(id)arg2;
- (void)_ensureNonNilObjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

