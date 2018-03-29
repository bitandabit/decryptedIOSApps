//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, SPTFreeTierAlbumBarButtonFactory, SPTFreeTierAlbumCommandHandlerFactory, SPTFreeTierAlbumContentOperationFactory, SPTFreeTierUpsellLogger;

@interface SPTFreeTierAlbumHubManager : NSObject
{
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    SPTFreeTierAlbumContentOperationFactory *_contentOperationFactory;
    SPTFreeTierAlbumCommandHandlerFactory *_commandHandlerFactory;
    SPTFreeTierAlbumBarButtonFactory *_barButtonFactory;
    id <GLUETheme> _glueTheme;
    SPTFreeTierUpsellLogger *_freeTierUpsellLogger;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBJSONSchema> _JSONSchema;
}

@property(readonly, nonatomic) id <EXP_HUBJSONSchema> JSONSchema; // @synthesize JSONSchema=_JSONSchema;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) SPTFreeTierUpsellLogger *freeTierUpsellLogger; // @synthesize freeTierUpsellLogger=_freeTierUpsellLogger;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTFreeTierAlbumBarButtonFactory *barButtonFactory; // @synthesize barButtonFactory=_barButtonFactory;
@property(readonly, nonatomic) SPTFreeTierAlbumCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTFreeTierAlbumContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)createViewModelLoaderForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 hubFrameworkService:(id)arg2 contentOperationFactory:(id)arg3 commandHandlerFactory:(id)arg4 barButtonFactory:(id)arg5 glueTheme:(id)arg6 freeTierUpsellLogger:(id)arg7;

@end

