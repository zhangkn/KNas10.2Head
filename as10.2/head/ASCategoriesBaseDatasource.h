//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCategoriesDatasourceProtocol-Protocol.h"
#import "ASItemArtworkLoaderProtocolDelegate-Protocol.h"
#import "ASPreferredItemControllerDelegate-Protocol.h"

@class NSOperationQueue, NSString, SKUIClientContext, SKUIResourceLoader, UIImage;
@protocol ASCategoriesDatasourceDelegate, ASCategoriesDatasourceProtocol, ASItemArtworkLoaderProtocol, ASPreferredItemControllerProtocol;

@interface ASCategoriesBaseDatasource : NSObject <ASItemArtworkLoaderProtocolDelegate, ASPreferredItemControllerDelegate, ASCategoriesDatasourceProtocol>
{
    _Bool _showDisclosureByDefault;
    _Bool _showIcons;
    _Bool _excludesNearby;
    id <ASCategoriesDatasourceDelegate> _delegate;
    id <ASItemArtworkLoaderProtocol> _artworkLoader;
    SKUIClientContext *_clientContext;
    NSOperationQueue *_imagesOperationQueue;
    id <ASPreferredItemControllerProtocol> _preferredItemController;
    SKUIResourceLoader *_resourceLoader;
    NSString *_title;
    Class _artworkLoaderClass;
    UIImage *_fallbackImage;
    id <ASCategoriesDatasourceProtocol> _dataSourceProtocolOverride;
}

@property(retain, nonatomic) id <ASCategoriesDatasourceProtocol> dataSourceProtocolOverride; // @synthesize dataSourceProtocolOverride=_dataSourceProtocolOverride;
@property(nonatomic) _Bool excludesNearby; // @synthesize excludesNearby=_excludesNearby;
@property(nonatomic) _Bool showIcons; // @synthesize showIcons=_showIcons;
@property(retain, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
@property(retain, nonatomic) Class artworkLoaderClass; // @synthesize artworkLoaderClass=_artworkLoaderClass;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showDisclosureByDefault; // @synthesize showDisclosureByDefault=_showDisclosureByDefault;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) id <ASPreferredItemControllerProtocol> preferredItemController; // @synthesize preferredItemController=_preferredItemController;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) id <ASItemArtworkLoaderProtocol> artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property(nonatomic) __weak id <ASCategoriesDatasourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_storeResponseImageForCategory:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)preferredItemController:(id)arg1 evictedCategories:(id)arg2;
- (void)imageArtworkLoader:(id)arg1 loadedImage:(id)arg2 forArtworkProvider:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_indexPathForCategory:(id)arg1;
- (id)_titleForSection:(unsigned long long)arg1;
- (unsigned long long)_headerTypeForSection:(unsigned long long)arg1;
- (void)_fetchCategories;
- (id)_categoryTitleAtIndexPath:(id)arg1;
- (id)_categoryAtIndexPath:(id)arg1;
- (_Bool)_canDisplayDrillInForCategoryAtIndexPath:(id)arg1;
- (id)indexPathForCategory:(id)arg1;
- (void)fetchCategories;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)headerTypeForSection:(unsigned long long)arg1;
- (id)categoryTitleAtIndexPath:(id)arg1;
- (id)categoryAtIndexPath:(id)arg1;
- (_Bool)canDisplayDrillInForCategoryAtIndexPath:(id)arg1;
- (void)updateDataSourceForLocationStatuschange:(_Bool)arg1;
@property(readonly, nonatomic) NSOperationQueue *imagesOperationQueue; // @synthesize imagesOperationQueue=_imagesOperationQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

