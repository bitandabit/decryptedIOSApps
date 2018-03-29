//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMapClusterableSprite-Protocol.h"

@class NSSet, NSString;

@interface SCMapSpriteCluster : NSObject <SCMapClusterableSprite>
{
    NSSet *_sprites;
    struct CLLocationCoordinate2D _coordinate;
    struct CGPoint _slippyPoint;
}

@property(nonatomic) struct CGPoint slippyPoint; // @synthesize slippyPoint=_slippyPoint;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)sprites;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSprites:(id)arg1;
- (id)initWithSprite:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

