//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMapDestination-Protocol.h"

@class NSString, SCMapPinDescriptor;

@interface SCMapCoordinateDestination : NSObject <SCMapDestination>
{
    double _zoomLevel;
    NSString *_displayText;
    SCMapPinDescriptor *_pinDescriptor;
    struct CLLocationCoordinate2D _center;
}

@property(copy, nonatomic) SCMapPinDescriptor *pinDescriptor; // @synthesize pinDescriptor=_pinDescriptor;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

