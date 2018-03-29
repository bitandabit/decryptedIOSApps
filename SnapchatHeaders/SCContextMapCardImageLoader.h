//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContextContentLoaderProtocol-Protocol.h"

@class NSError, SCContextMap, UIImage, UIImageView;

@interface SCContextMapCardImageLoader : NSObject <SCContextContentLoaderProtocol>
{
    struct CLLocationCoordinate2D _center;
    struct CLLocationCoordinate2D _userLocation;
    NSError *_error;
    SCContextMap *_map;
    UIImage *_image;
    UIImageView *_imageView;
    double _requestedImageHeight;
    double _requestedImageWidth;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_drawView:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 snapshot:(id)arg3;
- (void)_startSnapshot;
- (void)loadContent:(CDUnknownBlockType)arg1;
- (id)initWithMap:(id)arg1 height:(double)arg2 width:(double)arg3;

@end

