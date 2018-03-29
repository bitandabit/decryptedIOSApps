//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEThemeObserver.h"
#import "SFSafariViewControllerDelegate.h"
#import "SPTImageLoaderDelegate.h"

@class NSCache, NSString, SPTConcertsArtist, SPTConcertsDateFormatter, SPTConcertsEntity, UIColor, UIImage;

@interface SPTConcertsEntityHeaderViewModel : NSObject <GLUEThemeObserver, SPTImageLoaderDelegate, SFSafariViewControllerDelegate>
{
    _Bool _showTicketViewInWebviewIsEnabled;
    id <SPTConcertsEntityHeaderViewModelDelegate> _delegate;
    id <GLUETheme> _theme;
    UIImage *_primaryImage;
    id <SPTConcertsURLOpener> _URLOpener;
    SPTConcertsDateFormatter *_dateFormatterProvider;
    NSCache *_valuesCache;
    SPTConcertsEntity *_entity;
    id <SPTImageLoader> _imageLoader;
    id <SPTImageLoaderRequest> _primaryImageLoadRequest;
    id <SPTContainerUIService> _containerUIService;
}

@property(nonatomic) _Bool showTicketViewInWebviewIsEnabled; // @synthesize showTicketViewInWebviewIsEnabled=_showTicketViewInWebviewIsEnabled;
@property(retain, nonatomic) id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(retain, nonatomic) id <SPTImageLoaderRequest> primaryImageLoadRequest; // @synthesize primaryImageLoadRequest=_primaryImageLoadRequest;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTConcertsEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) NSCache *valuesCache; // @synthesize valuesCache=_valuesCache;
@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
@property(readonly, nonatomic) id <SPTConcertsURLOpener> URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) UIImage *primaryImage; // @synthesize primaryImage=_primaryImage;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTConcertsEntityHeaderViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeUpdated:(id)arg1;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)cancelAllLoads;
- (_Bool)shouldLoadPrimaryImageOfSize:(struct CGSize)arg1;
- (void)attemptLoadPrimaryImageOfSize:(struct CGSize)arg1;
- (void)loadPrimaryImageOfSize:(struct CGSize)arg1;
- (void)updateUsingEntity:(id)arg1;
- (void)showSharePage;
@property(readonly, copy, nonatomic) NSString *shareText;
- (void)openSafariViewWithURL:(id)arg1;
- (void)showFindTicketsPage;
@property(readonly, copy, nonatomic) NSString *findTicketsText;
@property(readonly, nonatomic, getter=isFindTicketsButtonEnabled) _Bool findTicketsButtonEnabled;
@property(readonly, copy, nonatomic) NSString *ticketDetailsText;
@property(readonly, nonatomic) _Bool shouldShowTicketDetails;
- (void)invalidateCachedValue;
- (id)valueForCacheKey:(SEL)arg1 creator:(CDUnknownBlockType)arg2;
- (id)timeTextDateFormatter;
@property(readonly, copy, nonatomic) NSString *timeText;
- (id)dateTextDateFormatter;
@property(readonly, copy, nonatomic) NSString *dateText;
@property(readonly, copy, nonatomic) NSString *venueText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, copy, nonatomic) NSString *dayText;
@property(readonly, copy, nonatomic) NSString *monthText;
@property(readonly, nonatomic) UIColor *primaryImageFallbackColor;
- (id)primaryImageFallbackOfSize:(struct CGSize)arg1;
- (void)setPrimaryImage:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) SPTConcertsArtist *headliner;
- (void)dealloc;
- (id)initWithURLOpener:(id)arg1 dateFormatterProvider:(id)arg2 imageLoader:(id)arg3 theme:(id)arg4 containerUIService:(id)arg5 showTicketViewInWebviewIsEnabled:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
