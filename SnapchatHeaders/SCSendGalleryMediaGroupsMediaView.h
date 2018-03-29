//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSendPreviewMediaView-Protocol.h"

@class NSArray, NSDictionary, NSString, SCUserSession, UIScrollView;

@interface SCSendGalleryMediaGroupsMediaView : UIView <SCSendPreviewMediaView>
{
    NSArray *_galleryMediaGroups;
    NSDictionary *_cloudFileContainers;
    SCUserSession *_userSession;
    UIScrollView *_scrollView;
    NSArray *_previewModels;
    NSArray *_mediaViews;
}

- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (id)SCAMediaTypes;
- (void)layoutSubviews;
- (void)_addModelsForGalleryMediaGroup:(id)arg1 previewModels:(id)arg2 mediaViews:(id)arg3;
- (void)_setupView;
- (id)initWithGalleryMediaGroups:(id)arg1 cloudFileContainers:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
