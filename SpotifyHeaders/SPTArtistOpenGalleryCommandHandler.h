//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"
#import "SPTArtistGalleryViewControllerDelegate.h"

@class NSString, NSURL, SPTArtistLogger, SPTNavigationManager;

@interface SPTArtistOpenGalleryCommandHandler : NSObject <SPTArtistGalleryViewControllerDelegate, EXP_HUBCommandHandler>
{
    NSURL *_viewURI;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTArtistLogger *_logger;
    SPTNavigationManager *_navigationManager;
    id <SPTModalPresentationController> _modalPresentationController;
}

@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) SPTArtistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (void)dismissGalleryViewController:(id)arg1;
- (_Bool)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithViewURI:(id)arg1 imageLoaderFactory:(id)arg2 logger:(id)arg3 navigationManager:(id)arg4 modalPresentationController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

