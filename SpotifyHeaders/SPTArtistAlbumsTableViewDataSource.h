//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTArtistArrayTableViewDataSource.h"

@class SPTArtistGLUETheme;

@interface SPTArtistAlbumsTableViewDataSource : SPTArtistArrayTableViewDataSource
{
    id <SPTProductState> _productState;
    id <GLUEImageLoader> _glueImageLoader;
    SPTArtistGLUETheme *_theme;
}

@property(retain, nonatomic) SPTArtistGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)setupGlueCard:(id)arg1 withItem:(id)arg2;
- (void)prepareCell:(id)arg1 withItem:(id)arg2 index:(long long)arg3;
- (void)prepareCell:(id)arg1 withItem:(id)arg2 index:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (id)initWithTableView:(id)arg1 imageLoader:(id)arg2 glueImageLoader:(id)arg3 glueTheme:(id)arg4 presentAsCollectionView:(_Bool)arg5 productState:(id)arg6;

@end

