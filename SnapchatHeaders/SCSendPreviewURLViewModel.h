//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSendPreviewViewModel-Protocol.h"
#import "SCSummaryDelegate-Protocol.h"

@class NSString, NSURL, SCURLSummary, SCUserSession, UIImage;
@protocol SCSendPreviewURLViewModelDelegate;

@interface SCSendPreviewURLViewModel : NSObject <SCSummaryDelegate, SCSendPreviewViewModel>
{
    SCUserSession *_userSession;
    NSURL *_url;
    UIImage *_urlMediaInfoImage;
    SCURLSummary *_urlSummary;
    id <SCSendPreviewURLViewModelDelegate> _delegate;
}

@property(retain, nonatomic) id <SCSendPreviewURLViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchThumbnailDidLoadForSummary:(id)arg1;
- (void)fetchThumbnailDidFailForSummary:(id)arg1;
- (void)fetchThumbnailIsLoadingForSummmary:(id)arg1;
- (void)_loadUrlInfo;
- (double)mediaViewAspectRatio;
- (id)subtitle;
- (id)title;
- (id)mediaView;
- (_Bool)shouldPadMediaView;
- (long long)shareType;
- (long long)viewStyle;
- (id)initWithURL:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

