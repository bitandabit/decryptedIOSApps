//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, SCPreviewFilterDataProviderContextData, SCVenueFilterSelector, SOJUContextFilterMetadata;

@interface SCFiltersState : NSObject <NSCopying>
{
    _Bool _isVenueFilterSelected;
    _Bool _reverseMotionFilterEnabled;
    _Bool _reverseMotionFilterSelected;
    _Bool _streakFilterSelected;
    SOJUContextFilterMetadata *_contextFilterMetaData;
    NSString *_contextFilterSelectedId;
    NSArray *_visualFilters;
    unsigned long long _visualFilterSelected;
    NSArray *_smartFilters;
    unsigned long long _smartFilterSelected;
    NSArray *_geoFilters;
    unsigned long long _geoFilterSelected;
    NSArray *_speedMotionFilters;
    unsigned long long _speedMotionFilterSelected;
    SCVenueFilterSelector *_venueFilterSelector;
    long long _streakCount;
    SCPreviewFilterDataProviderContextData *_contextData;
    NSDictionary *_filterInteractionState;
}

@property(retain, nonatomic) NSDictionary *filterInteractionState; // @synthesize filterInteractionState=_filterInteractionState;
@property(retain, nonatomic) SCPreviewFilterDataProviderContextData *contextData; // @synthesize contextData=_contextData;
@property(nonatomic) _Bool streakFilterSelected; // @synthesize streakFilterSelected=_streakFilterSelected;
@property(nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;
@property(nonatomic) _Bool reverseMotionFilterSelected; // @synthesize reverseMotionFilterSelected=_reverseMotionFilterSelected;
@property(nonatomic) _Bool reverseMotionFilterEnabled; // @synthesize reverseMotionFilterEnabled=_reverseMotionFilterEnabled;
@property(nonatomic) _Bool isVenueFilterSelected; // @synthesize isVenueFilterSelected=_isVenueFilterSelected;
@property(copy, nonatomic) SCVenueFilterSelector *venueFilterSelector; // @synthesize venueFilterSelector=_venueFilterSelector;
@property(nonatomic) unsigned long long speedMotionFilterSelected; // @synthesize speedMotionFilterSelected=_speedMotionFilterSelected;
@property(copy, nonatomic) NSArray *speedMotionFilters; // @synthesize speedMotionFilters=_speedMotionFilters;
@property(nonatomic) unsigned long long geoFilterSelected; // @synthesize geoFilterSelected=_geoFilterSelected;
@property(copy, nonatomic) NSArray *geoFilters; // @synthesize geoFilters=_geoFilters;
@property(nonatomic) unsigned long long smartFilterSelected; // @synthesize smartFilterSelected=_smartFilterSelected;
@property(copy, nonatomic) NSArray *smartFilters; // @synthesize smartFilters=_smartFilters;
@property(nonatomic) unsigned long long visualFilterSelected; // @synthesize visualFilterSelected=_visualFilterSelected;
@property(copy, nonatomic) NSArray *visualFilters; // @synthesize visualFilters=_visualFilters;
@property(copy, nonatomic) NSString *contextFilterSelectedId; // @synthesize contextFilterSelectedId=_contextFilterSelectedId;
@property(copy, nonatomic) SOJUContextFilterMetadata *contextFilterMetaData; // @synthesize contextFilterMetaData=_contextFilterMetaData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

