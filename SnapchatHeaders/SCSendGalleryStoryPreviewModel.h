//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSendPreviewViewModel-Protocol.h"

@class NSString, SCGalleryMediaGroup, SCUserSession;

@interface SCSendGalleryStoryPreviewModel : NSObject <SCSendPreviewViewModel>
{
    SCGalleryMediaGroup *_mediaGroup;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)subtitle;
- (id)title;
- (long long)shareType;
- (id)mediaView;
- (double)mediaViewAspectRatio;
- (long long)viewStyle;
- (id)initWithGalleryMediaGroup:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

