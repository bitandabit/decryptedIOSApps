//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class MGLMapCamera, MGLMapView, NSArray, NSString, SCMTThumbnail;

@interface SCMapExplorerStatus : NSObject <NSCopying>
{
    _Bool _requiresUpdate;
    int _type;
    NSString *_statusId;
    double _timestamp;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_subtitleText;
    NSString *_footerText;
    NSArray *_people;
    NSString *_emoji;
    NSString *_mapStoryId;
    SCMTThumbnail *_mapStoryThumbnail;
    double _zoom;
    MGLMapCamera *_cachedCamera;
    MGLMapView *_cachedMapView;
    struct CLLocationCoordinate2D _poiCoordinate;
}

+ (id)_cameraForMapView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2 necessaryLocations:(id)arg3 supplementaryLocations:(id)arg4 zoom:(double)arg5;
+ (id)_footerTextForTimestamp:(double)arg1;
+ (id)_descriptionFromTemplate:(id)arg1 people:(id)arg2;
+ (id)_subtitleForPeople:(id)arg1;
+ (id)_titleForPeople:(id)arg1;
+ (double)_timestampForFriendStatus:(id)arg1;
+ (id)_statusFromSCMEExplorerMapStatus:(id)arg1;
+ (id)_statusFromSCMEExplorerFriendStatus:(id)arg1;
+ (id)_statusThatRequiresUpdate;
+ (id)statusFromSCMEExplorerStatus:(id)arg1;
@property(nonatomic) __weak MGLMapView *cachedMapView; // @synthesize cachedMapView=_cachedMapView;
@property(retain, nonatomic) MGLMapCamera *cachedCamera; // @synthesize cachedCamera=_cachedCamera;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic) struct CLLocationCoordinate2D poiCoordinate; // @synthesize poiCoordinate=_poiCoordinate;
@property(readonly, nonatomic) _Bool requiresUpdate; // @synthesize requiresUpdate=_requiresUpdate;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SCMTThumbnail *mapStoryThumbnail; // @synthesize mapStoryThumbnail=_mapStoryThumbnail;
@property(readonly, copy, nonatomic) NSString *mapStoryId; // @synthesize mapStoryId=_mapStoryId;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *statusId; // @synthesize statusId=_statusId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isMyStatus;
- (id)cameraForMapView:(id)arg1 friendLocationsDataStore:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
- (id)initWithStatusId:(id)arg1 timestamp:(double)arg2 titleText:(id)arg3 subtitleText:(id)arg4 descriptionText:(id)arg5 footerText:(id)arg6 poiCoordinate:(struct CLLocationCoordinate2D)arg7 zoom:(double)arg8 people:(id)arg9 emoji:(id)arg10 mapStoryId:(id)arg11 mapStoryThumbnail:(id)arg12 type:(int)arg13 requiresUpdate:(_Bool)arg14;

@end

