//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, NSDictionary, NSString, NSURL;

@interface SPTHomeViewControllerBuilder : NSObject
{
    id <EXP_HUBJSONSchema> _jsonSchema;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBCommandHandler> _commandHandler;
    NSDictionary *_defaultCommandRegister;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <GLUETheme> _glueTheme;
    id <EXP_SPTHubContentOperationFactory> _contentOperationFactory;
    id <EXP_HUBComponentFallbackHandler> _fallbackHandler;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_HUBComponentLayoutManager> _componentLayoutManager;
    id <EXP_HUBImageLoaderFactory> _imageLoaderFactory;
    id <SPTCollectionEntityList> _collectionEntityList;
    NSURL *_viewURI;
    NSString *_featureID;
    NSURL *_sourceURL;
}

@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTCollectionEntityList> collectionEntityList; // @synthesize collectionEntityList=_collectionEntityList;
@property(readonly, nonatomic) id <EXP_HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) id <EXP_HUBComponentFallbackHandler> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
- (void).cxx_destruct;
- (id)createHomeComponents;
- (id)makeRecentlyPlayedContentOperations;
- (id)makeHubs2TargetTranslationContentOperation;
- (id)makeContentLoadingContentOperation;
- (id)makeContentOperations;
- (id)makeViewModelLoader;
- (id)makeViewModelProvider;
@property(readonly, nonatomic) NSDictionary *defaultCommandRegister; // @synthesize defaultCommandRegister=_defaultCommandRegister;
@property(readonly, nonatomic) id <EXP_HUBCommandHandler> commandHandler; // @synthesize commandHandler=_commandHandler;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <EXP_HUBJSONSchema> jsonSchema; // @synthesize jsonSchema=_jsonSchema;
- (id)makeHubsRendererViewController;
- (id)initWithHubFrameworkService:(id)arg1 glueService:(id)arg2 recentlyPlayedService:(id)arg3 featureID:(id)arg4 viewURI:(id)arg5 sourceURL:(id)arg6;

@end

