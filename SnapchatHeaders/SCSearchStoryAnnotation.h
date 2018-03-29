//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MGLAnnotation-Protocol.h"

@class NSString, SCSearchMapStoryViewModel;

@interface SCSearchStoryAnnotation : NSObject <MGLAnnotation>
{
    SCSearchMapStoryViewModel *_mapStoryViewModel;
}

@property(readonly, nonatomic) SCSearchMapStoryViewModel *mapStoryViewModel; // @synthesize mapStoryViewModel=_mapStoryViewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithMapStoryViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

