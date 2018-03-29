//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SCStickerProtocol;

@interface SCOnDemandGeofilterStickerMetadataBuilder : NSObject
{
    id <SCStickerProtocol> _sticker;
    struct CGPoint _center;
    double _rotation;
    double _scale;
}

+ (id)withOnDemandGeofilterStickerMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setScale:(double)arg1;
- (id)setRotation:(double)arg1;
- (id)setCenter:(struct CGPoint)arg1;
- (id)setSticker:(id)arg1;
- (id)build;

@end

