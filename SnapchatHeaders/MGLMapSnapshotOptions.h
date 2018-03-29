//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MGLMapCamera, NSURL;

@interface MGLMapSnapshotOptions : NSObject
{
    NSURL *_styleURL;
    double _zoomLevel;
    MGLMapCamera *_camera;
    double _scale;
    struct CGSize _size;
    struct MGLCoordinateBounds _coordinateBounds;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct MGLCoordinateBounds coordinateBounds; // @synthesize coordinateBounds=_coordinateBounds;
@property(retain, nonatomic) MGLMapCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) NSURL *styleURL; // @synthesize styleURL=_styleURL;
- (void).cxx_destruct;
- (id)initWithStyleURL:(id)arg1 camera:(id)arg2 size:(struct CGSize)arg3;

@end

