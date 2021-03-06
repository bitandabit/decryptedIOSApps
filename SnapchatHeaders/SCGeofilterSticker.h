//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCStickerProtocol-Protocol.h"

@class NSString, SCGeoFilter, SCGeoFilterAppearanceSetting, SCGeoFilterImage, SCPreviewFilterDataProviderContextData, UIImage;

@interface SCGeofilterSticker : NSObject <SCStickerProtocol>
{
    NSString *_filterId;
    SCPreviewFilterDataProviderContextData *_contextData;
    UIImage *_scaledImage;
    SCGeoFilter *_geofilter;
    SCGeoFilterImage *_geofilterImage;
    SCGeoFilterAppearanceSetting *_geofilterAppearanceSetting;
}

+ (id)sharedPerformer;
@property(retain, nonatomic) SCGeoFilterAppearanceSetting *geofilterAppearanceSetting; // @synthesize geofilterAppearanceSetting=_geofilterAppearanceSetting;
@property(retain, nonatomic) SCGeoFilterImage *geofilterImage; // @synthesize geofilterImage=_geofilterImage;
@property(retain) SCGeoFilter *geofilter; // @synthesize geofilter=_geofilter;
@property(retain) UIImage *scaledImage; // @synthesize scaledImage=_scaledImage;
- (void).cxx_destruct;
- (id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortLoggingNameWithGeoStickerId;
- (id)shortLoggingName;
- (id)loggingParamtersWithGeoStickerId;
- (id)loggingParamters;
- (id)stickerId;
- (id)packId;
- (unsigned long long)type;
- (id)initWithFilterId:(id)arg1 geofilter:(id)arg2 contextData:(id)arg3;
- (id)toSOJUSticker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

