//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASItemArtworkLoaderProtocol-Protocol.h"
#import "SKUIArtworkRequestDelegate-Protocol.h"

@class NSMapTable, NSString, SKUIResourceLoader, SKUIStyledImageDataConsumer, UIImage;
@protocol ASItemArtworkLoaderProtocolDelegate, OS_dispatch_queue;

@interface ASItemArtworkLoader : NSObject <SKUIArtworkRequestDelegate, ASItemArtworkLoaderProtocol>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <ASItemArtworkLoaderProtocolDelegate> _delegate;
    NSMapTable *_artworkRequestIDs;
    SKUIStyledImageDataConsumer *_dataConsumer;
    UIImage *_placeholderImage;
    SKUIResourceLoader *_resourceLoader;
    struct CGSize _artworkSize;
}

+ (struct CGSize)_artworkSize;
@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) SKUIStyledImageDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
@property(readonly, nonatomic) NSMapTable *artworkRequestIDs; // @synthesize artworkRequestIDs=_artworkRequestIDs;
@property(nonatomic) __weak id <ASItemArtworkLoaderProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)_artworkSizeScaledForDisplay;
- (id)_imageForArtworkProvider:(id)arg1 reason:(long long)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)styledImageForImage:(id)arg1;
- (id)imageForArtworkProvider:(id)arg1;
- (id)imageForArtworkProvider:(id)arg1 reason:(long long)arg2;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (id)initWithResourceLoader:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
