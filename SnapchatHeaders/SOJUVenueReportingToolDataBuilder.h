//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUVenueReportingToolDataBuilder : NSObject
{
    NSString *_selectedVenueId;
    NSArray *_venueFilters;
    NSNumber *_snapLat;
    NSNumber *_snapLon;
}

+ (id)withJUVenueReportingToolData:(id)arg1;
- (void).cxx_destruct;
- (id)setSnapLon:(id)arg1;
- (id)setSnapLat:(id)arg1;
- (id)setVenueFilters:(id)arg1;
- (id)setSelectedVenueId:(id)arg1;
- (id)build;
- (id)setSnapLonValue:(double)arg1;
- (id)setSnapLatValue:(double)arg1;

@end

